#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void){
	int fp = open("firstfile.txt",O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
	printf("fp value:%d\n",fp);
    close(fp);

	fp = open("firstfile.txt",O_APPEND);
	int pos=lseek(fp, 100, SEEK_CUR);
	printf("pos after seek:%d\n",pos);

	int x=99;
	char cs[] = {'a', 'b', 'c'};
    int wsize=write(fp,cs,sizeof(cs));
	printf("write size: %d\n",wsize);

	struct stat statbuf;
	int mfstate = fstat(fp,&statbuf);
	printf("fstat success? %d\n",mfstate);
    printf("id of device containg file:%d\n",(int)statbuf.st_dev);
	printf("Inode number: %d\n", (int)statbuf.st_ino);
	printf("file type and mode: %d\n", statbuf.st_mode);
	printf("number of hard links:%d\n",(int)statbuf.st_nlink);
	printf("user id or owner: %d\n", statbuf.st_uid);
	close(fp);
	return 0;
}
