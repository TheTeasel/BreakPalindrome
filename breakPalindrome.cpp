/*
 *  Read the readme.md for more detail about the problem.
 *  You can find this problem at https://leetcode.com/problems/break-a-palindrome/
 */
#include <cstdlib>
#include <string>

/*
 *  BREAK THE PALINDROME
 */
std::string breakPalindrome(std::string palindrome){
    int n = palindrome.length();

    //If there is only 1 character then we return an empty string
    if(n == 1)
        return "";

    //We go from the beginning to the middle of the palindrome
    //If the size is an odd number, the middle value will be skipped
    for(int i = 0; i < n / 2; ++i){
        //If the current value is not 'a' then change it to 'a'
        //The result will be the smallest string possible
        if(palindrome[i] != 'a'){
            palindrome[i] = 'a';
            return palindrome;
        }
    }

    //If the palindrom was 'a' only the we change the last character to 'b'
    //The result will be the smallest string possible
    palindrome[n-1] = 'b';

    return palindrome;
}
