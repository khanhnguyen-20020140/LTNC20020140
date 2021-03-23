void reverse(char *s) {
	int count=0;
	char *s2=new char[strlen(s)];
    while((s+count)<(s+strlen(s))){
        *(s2+strlen(s)-1-count)=*(s+count);
        count++;
    }
    count=0;
    while((s+count)<(s+strlen(s))){
        *(s+count)=*(s2+count);
        count++;
    }

}



void rFilter(char *s) {
    int count=0;
    while((s+count)<(s+strlen(s))){
        if(*(s+count)<'A' || *(s+count)>'z'){
            *(s+count)='_';
        }
        if(*(s+count)>=char(91)&&*(s+count)<=char(96)){
            *(s+count)='_';
        }
        ++count;
    }
}
