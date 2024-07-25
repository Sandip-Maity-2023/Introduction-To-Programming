#include <stdio.h>
#include <string.h>

// Function to check if a URL is a phishing URL (simple heuristic)
int isPhishingURL(const char *url) {
    const char *phishingKeywords[] = {
        "login", "verify", "update", "secure", "account", "bank", "paypal"
    };
    int numKeywords = sizeof(phishingKeywords) / sizeof(phishingKeywords[0]);

    for (int i = 0; i < numKeywords; i++) {
        if (strstr(url, phishingKeywords[i]) != NULL) {
            return 1; // URL contains a phishing keyword
        }
    }
    return 0; // URL does not contain any phishing keywords
}

int main() {
    char url[256];

    printf("Enter a URL to check: ");
    scanf("%255s", url);

    if (isPhishingURL(url)) {
        printf("Warning: The URL '%s' may be a phishing site.\n", url);
    } else {
        printf("The URL '%s' appears to be safe.\n", url);
    }

    return 0;
}
