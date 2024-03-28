# libft

## Table of Contents
- [Overview](#overview)
- [Requirements](#requirements)
- [Build](#build)
- [Usage](#usage)
    - [Example](#example)
- [Lisence](#lisence)

## Overview

`libft` is small C static library intended to contain a set of helper functions to help you out in building more complex, and challenging problems. Includes wide range of helper functions such as string manipulation, building linked lists. etc.

For the list of implemented functions, refer to the subject file included in the `subject` directory.

## Requirements

This library have zero dependency, all you need is a C compiler and the `ar` archiver. The Included Makefile is configured to use `cc`. You can use your compile of choice.

## Build

To build The library, cd into `src` and run the following command

```sh
make
```

This will result in a `libft.a` file which is a archive file containing all our object files. Which implements the library.

## Usage

To use `libft` in your project include it in your src files list or as a argument to your C compiler.

### Example

This is a example compiling a `main.c` file using `libft.a` static library

```sh
gcc libft.a main.c -o main
```

## Lisence

This project is licensed under MIT license. See the LICENSE file for details.
