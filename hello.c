#include<stdio.h>
#include<curl/curl.h>

int main()
{
  CURL *curl;
  CURL code res;
  
  curl=curl_easy_init();
  if(curl){
   curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip1.net/");
   res=curl_easy_perfom(curl);
   if(res!=CURLE_OK)
    fprintf(stderr,"curl_easy_perform() failed:%s\n";
          curl_easy_cleanup(curl);
    curl_easy_cleanup(curl);
 }
 return 0;
 }

