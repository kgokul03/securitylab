
#include<stdio.h>
#include<math.h>
void decrypt(int key)
{
	char message[100], ch;
	int i;

	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", message);
		printf("\n");
}
 void encrypt(int key)
 {
 	
 	
 	char message[100], ch;
	int i;
	
	printf("Enter a message to encrypt: ");
	gets(message);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", message);
	printf("\n");
	
	return 0;
 }

long long int power(long long int a, long long int b,
                                     long long int P)
{ 
    if (b == 1)
        return a;
 
    else
        return (((long long int)pow(a, b)) % P);
}
 
int main()
{
    long long int P, G, x, a, y, b, ka, kb; 
     
    P = 23; 
    printf("The value of P : %lld\n", P); 
 
    G = 9; 
    printf("The value of G : %lld\n\n", G); 
 
    a = 4;
    printf("The private key a : %lld\n", a);
    x = power(G, a, P); 
     
    
    b = 3; 
    printf("The private key b : %lld\n\n", b);
    y = power(G, b, P); 
 
    
    ka = power(y, a, P); 
    kb = power(x, b, P); 
    
    printf("Secret key for Sender is : %lld\n", ka);
    printf("Secret Key for reciever is : %lld\n", kb);
    encrypt(kb);
    decrypt(kb);
    return 0;
}
