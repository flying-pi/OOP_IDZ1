//
// Created by Yura Braiko on 17.11.16.
//

void getbin(unsigned int n,char *out){
    for(int i=0;i<32;i++){
        out[i] = n&0x80000000?'1':'0';
        n=n<<1;
    }
}