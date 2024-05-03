#include <curl/curl.h>
#include <stdio.h>

int main(void) {
  CURL *curl = curl_easy_init();
  if (curl) {
    CURLcode res;
    curl_easy_setopt(
        curl, CURLOPT_URL,
        "https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, stdout);
    res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
      printf("error: %s\n", curl_easy_strerror(res));
    } else {
      printf("worked");
    }
    curl_easy_cleanup(curl);
  }
  return 0;
}
