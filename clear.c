void clear(void){
#ifdef USE_1190
  v1X90_map_clear(V1190_MAPN);
#endif

#ifdef USE_2495
  v2495_out(V2495_MAPN);
#endif

  //  printk("clear()\n");
}
