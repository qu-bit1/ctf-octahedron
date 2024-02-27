# John the Ripper

[John the Ripper](https://www.openwall.com/john/) is an Open Source password security auditing and password recovery tool

- One remarkable feature of John is that it can autodetect the encryption for common formats.

- This is how John works by default:
	- recognize the hash type of the current hash
	- generate hashes on the fly for all the passwords in the dictionary
	- stop when a generated hash matches the current hash.

- Can also specify the password format using flags.
-  # Note - `!` begins a shell history expansion in terminal, so use quotes whenever entering `!`
---
## Usage
- Getting hashes out of zip into a file named `zip.hashes`.
```
zip2john file.zip > zip.hashes
```
- `Mask flag` - Using john on a pre-password format, here we need to bruteforce 3 unknown characters after '.com'.
```
john --mask=900802jfeng@veryrealmail.com?a?a?aR3ply! zip.hashes
```
