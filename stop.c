void unmap(void){
#ifdef USE_1190
	univ_end_window(V1190_MAPN);
	univ_end_dma(V1190_MAPN);
#endif
	printk("unmap done\n");
}


void stop(void){
	printk("DAQ stop.\n");
	printk("\n");
}
