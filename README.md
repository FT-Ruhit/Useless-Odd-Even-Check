# Useless Odd Even Check

This repository is a thrilling masterpiece of unnecessary engineering. It asks you for a number, writes a second file, and then that second file proudly announces whether each number from 1 to your chosen limit is odd or even.

In other words: a C program generates a Python program to do the most basic math possible.

Because apparently the world needed that.

## What this project does

1. You run the C program.
2. It asks: `Enter how much further:`
3. You type a number.
4. It writes a Python file called `useless.py`.
5. That Python file contains an absurd chain of `if`/`elif` checks for each number.
6. You run the Python file and it tells you if your input is odd or even.

This is not efficient.
This is not elegant.
This is not even remotely necessary.
It is, however, extremely committed to the bit.

## The glorious rationale

The creator of this project looked at the classic odd/even problem and thought:

> "What if instead of writing a clean modulo check, I generate a giant list of hardcoded conditions like a confused vending machine?"

And so, a legend was born.

## Quick start

Compile the C program:

```bash
gcc main.c -o main
```

Run it:

```bash
./main
```

Then you will see:

```text
Enter how much further: 10
```

After that, a file named `useless.py` will appear.

Run it:

```bash
python useless.py
```

Example:

```text
Enter the number: 7
Odd
```

## Important warning

The code contains this delightful message:

```text
Don't open this in a read only directory you fucking idiot
```

So yes, it is both a calculator and a motivational coach.

## Why this repo is a national treasure

- It proves that C can generate Python.
- It proves that Python can be written like a very angry switchboard.
- It proves that we do not always need the smartest tool for the job.
- It proves that sometimes the dumbest option is still kind of hilarious.

## Final note

This project is not a serious application.
It is a joke with a compiler.
A tiny little chaos machine built for the joy of overengineering.

If you're looking for a practical parity checker, please use modulo.
If you're looking for a deeply unserious experience, welcome aboard.

The author apologizes to the universe.
