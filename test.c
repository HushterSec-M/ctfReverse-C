#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char a[] = "97118971059710397101971029712097122979797120971139711097999711497989712197114";
	char b[] = "fla";
	char c[] = "g{patch";
	char d[] = "thebest";
	char e[] = "}";
	int i = 0;
	if ((argc>1) && (!strcmp(argv[1],"ctf"))){
		printf("%s\n", a);
	} else if((argc>1) && (!strcmp(argv[1],"hint"))){
		while (i<strlen(a)-3){
			if ((a[i] == '9') && (a[i+1] == '7')) {
				printf("a");
				i = i + 2;
			} else {
				printf("%c", a[i]);
				i++;
			}
		}
		printf("%c", a[i++]);
		printf("%c", a[i++]);
		printf("%c", a[i]);
		printf("\n");
	} else printf("Welcome to CTF!!!");

	int n = 10;
	if (n==11) {
		printf("%s", b);
		printf("%s", c);
		printf("%s", d);
		printf("%s", e);
	}
	return 0;
}
