/* word (block) */
/* word size */


int main(){
    
    unsigned char v1  = 0x00;
    unsigned char v2  = 0xFF;
    unsigned short v3 = 0x0000;
    unsigned int v4 = 0xFF2C37AE;
    
    unsigned char bitmask = 0b00001010;
    unsigned char bitmask_2 = 0b11001111;
    
    v1 |= bitmask;
    v2 &= bitmask_2; 
    v3 |= 0x0300;
    v4 &= 0xFFF0FFFF;
    v4 |= 0x00030000;
    v4 |= 0x00000800;
    v4 &= 0xAFFFFFFF;
    
    return 0;
}
