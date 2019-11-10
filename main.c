/*#include <stdio.h>

int main(int argc, char *argv[]){
	printf("%i\n", argc);
	if (argc>1) printf("%s\n", argv[1]);
	return 0;
}*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *f1;
    FILE *f2;
    char fname[100];
    char c;
    int cur=0;
    f2=fopen("output.txt","w");
    //printf("file name: ");
    //scanf("%s",fname);
    f1=fopen("input.txt","r");
    if (f1==NULL) {
        printf("file not found\n");
        return 0;
    }
	char key[]="kduc";
    printf("key: %c;", key[0]);
    printf("key: %c;", key[1]);
    printf("key: %c;", key[2]);
   

    while (!feof(f1)){
        if (fread(&c,1,1,f1)){
            if ((c>=97)&&(c<=122)){
                if ( (c+key[cur]-97)<=122) c=c+key[cur]-97; else
                    c=key[cur]+c-123;
                fprintf(f2,"%с ",c);   
                if (cur<strlen(key)-1) ++cur; else cur=0;

            } else fprintf(f2,"%c",c);
           
        }
    }
   

    fclose(f1);
    fclose(f2);
    return 0;
}