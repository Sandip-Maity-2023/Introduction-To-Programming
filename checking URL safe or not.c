//
// Created by 12san on 01-08-2024.
//
#include<stdio.h>
#include<string.h>

int isPhishingKeywords(const char* URL){
    const char *phishingkeywords[]={
       "login","verify","bank","paypal","account","secure","update"
    };
    int numkeywords=sizeof(phishingkeywords)/sizeof(phishingkeywords[0]);

    for(int i=0;i<numkeywords;i++){
        if(strstr(URL,phishingkeywords[i]) != NULL){
            return 1;
        }
        }
    return 0;
    }

int main(){
    char url[256];
    printf("Enter the URL to verify it whether safety or not:\n");
    scanf("%s",&url);
    if(isPhishingKeywords(url)){
        printf("WARNING! The URL '%s' may be phishing site",url);
    }else{
        printf("URL '%s' appearing as safe site",url);
    }
    return 0;
}