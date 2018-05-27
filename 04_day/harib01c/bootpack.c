void io_hlt(void);

void HariMain(void){
    int i;
    char *p;

    for(i = 0xa0000; i < 0xaffff; i++){
        p = i;
        *p = i & 0x0f; /* Write color code to the addr of VRAM */
    }

    for(;;){
        io_hlt();
    }
}
