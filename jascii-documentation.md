# j-ascii command-line
This command help you to convert data to binary, octal, decimal, and hexadecimal.

## How to use jascii?
The following line explain how to use `jascii` command line.
```
jascii type data
```

## Arguments type
There 4 argument types:
- `b` or `B`: This option help you to convert data to binary.
- `o` or  `O`: This option help you to convert data to octal.
- `d` or `D`: This option help you to convert data to decimal.
- `h` or  `H`: This option help you to convert data to haxadecimal.

## Example
- jascii x hello -> 0x68 0x65 0x6c 0x6c 0x6f
- jascii d hello -> 104 101 108 108 111
- jascii o hello -> 150 145 154 154 157
- jascii b hello -> 011010000 01100101 01101100 01101100 01101111
