#include <stdio.h>
#include <string.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int arr[26] = {0};
    int ransomNoteLen = strlen(ransomNote);
    int magazineLen = strlen(magazine);

for (int i = 0; i < magazineLen; i++) {
        arr[magazine[i] - 'a']++;
    }
    for (int i = 0; i < ransomNoteLen; i++) {
        if (arr[ransomNote[i] - 'a'] == 0) {
            return false;
            //printf("%s\n", result="true");
        }
        arr[ransomNote[i] - 'a']--;
    }

    return true;
    //printf("%s\n", result="true");
}
void main(){
    char ransomNote[]="aa";
    char magazine[]= "aab";
    result = canConstruct(ransomNote,magazine);
    printf("%s\n", result ? "true" : "false");


}
