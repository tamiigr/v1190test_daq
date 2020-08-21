void map(void){
  /* V1190 mapping */
#ifdef USE_1190
  univ_init_window(V1190_BASE_ADR, V1190_MAP_SIZE, A32, V1190_MAPN);
  univ_init_dma(V1190_BASE_ADR, DMASIZE, V1190_MAPN);
#endif
  printk("mapping done\n");
}

void startup(void){
  short val;
  /* Startup Function */
  vme_define_intlevel(INTLEVEL);
 // initialize V1190
#ifdef USE_1190
/*
#define V1190_MAPN 3
Just module number
*/
  v1X90_multi_map_evt_reset(0, V1190_MAPN);
  //V1190 IRQL level is 3
  v1X90_multi_map_intlevel(3, 0, V1190_MAPN);
  /*
  interrupt timming when data stored
  interrput request release 
  read access to output buffer
  */
  v1X90_multi_map_almost_full(1, 0, V1190_MAPN);
  v1X90_multi_map_cnt_reg(0x128, 0, V1190_MAPN);
#endif
  printk("DAQ start.\n");
}
