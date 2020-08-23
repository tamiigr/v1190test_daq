void clear(void){
#ifdef USE_1190
  v1X90_map_clear(V1190_MAPN);
  printk("clear()\n");
#endif
}
