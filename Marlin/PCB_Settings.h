#define PCB_ORIGIN_X 30
#define PCB_ORIGIN_Y 115
#define PCB_SIZE_X 80 // Width of the PCB in mm
#define PCB_SIZE_Y 40 // Height of the PCB in mm
#define PCB_INSET 5   // Inset from the edge of the PCB to avoid clips




#define PCB_MIN_X PCB_ORIGIN_X + PCB_INSET
#define PCB_MIN_Y PCB_ORIGIN_Y + PCB_INSET
#define PCB_MAX_X PCB_ORIGIN_X + PCB_SIZE_X - (PCB_INSET)
#define PCB_MAX_Y PCB_ORIGIN_Y + PCB_SIZE_Y - (PCB_INSET)
#define PCB_MID_Y (PCB_ORIGIN_Y + (PCB_SIZE_Y / 2))