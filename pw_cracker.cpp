// pw_cracker.cpp
// Author: Isabel Kalogiannis

/*
There is a csv file in this zipped assignment called "passwords.csv".
This csv has 20 passwords hashed using SHA-256 with no salt (one hash per line).
Your assignment is to find the plain text of each of these twenty passwords.
These passwords are some easy-to-guess passwords; they are English words with
small permutations. These passwords plaintext are encoded using utf-8.

You are provided a file "dictionary.txt" which is a list of words that the
passwords are based on. You are also provided with a list of permutations
"permutations.txt" which contains the possible permutations applied to the
English words; one example of a permutation is changing all "o" to a "0".
All of the passwords in the passwords file are a single English word with at
most one of the permutations in permutations.txt applied to it.

As a sanity check to make sure your hashing algorithm is correct, the first
password in passwords.csv is "password". Write the twenty plain text passwords
in order. If you were not able to obtain the plain text for a given password,
leave a blank line
*/
