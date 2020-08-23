#include "rpv130.h"
#include "babirldrvcaen.h"
#include "tmb2.h"

#define _DEBUG_EVT 0
#define _DMA_MADC32 0
#define _DMA_TMB2 0

#define FADC_DATA 0x2
#define TPC_DATA 0x3
#define FOOTER_DATA 0xffffffff

void evt(void){
  //  vme_read_intvector();
  /* Event */
  init_event();

#ifdef USE_1190
/*
#define MKSEGID(device,focal,detector,module) ((((device<<6 | focal) << 6) | detector)<<8 | module)
#define RCNPEN     5
#define F3   3
#define SSDT     7
#define ENF2V1190  43
*/
  init_segment(MKSEGID(RCNPEN,F3,SSDT,V1190));
  v1X90_map_dma_segdata(V1190_MAPN);
  //  printk("v1190 read \n");
  end_segment(); 

#endif

  //  end_event();

}
