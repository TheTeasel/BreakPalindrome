## Description
Given a palindromic string palindrome, replace exactly one character by any lowercase English letter so that the string becomes the lexicographically smallest possible string that isn't a palindrome.

After doing so, return the final string.  If there is no way to do so, return the empty string.

## Constraints
- The ```palindrome``` consists of only lowercase English letter.

## Example
Let's take a string ```palindrome``` where ```palindrome = "abccba"```.

We need to break the palindrome and also return the smallest possible string.

### Reminder
- If the size of the palindrom is odd, changing the middle value will not break the palindrome.

e.g. : Changing the middle lettre of ```abbzbba``` by any value will not break the palindrome because ```abbybba``` is still a palindrome.

***
You can find this problem on [LeetCode](https://leetcode.com/problems/break-a-palindrome/).
