#include "stdafx.cpp"
#include <stdio.h>
#include <curl/curl.h>

using namespace std;

int main(int argc, char *argv[])
{

	char *url = "18.111.125.74/led/on";

	CURL *curl;
	CURLcode res;

	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, url);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}

	getchar();
	return 0;
}