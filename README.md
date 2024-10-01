# 42 - ft_printf
A project that consists on creating a replica of the `printf` function. Well... A very limited version of it.

<div align=center>
<a href="https://www.codefactor.io/repository/github/xdec0de/42printf"><img src="https://www.codefactor.io/repository/github/xdec0de/42printf/badge" alt="CodeFactor"/></a>
<a href="https://app.codacy.com/gh/xDec0de/42printf"><img src="https://app.codacy.com/project/badge/Grade/016a53fa76b24af983e035a00a3566b5" alt="Codacy"/></a>
</div>

## Project instructions
First, let's see the general instructions that apply to ft_printf:
- The Makefile must not [relink](https://stackoverflow.com/questions/52502399/what-does-it-mean-for-a-makefile-to-relink).
- The function must never crash nor have undefined behavior (This project has an exception to this rule).
- The code must be written following [norminette](https://github.com/42School/norminette) requirements.
- Memory leaks are an issue, so no leaks are allowed, even if the function fails.

Now, the specific instructions for ft_printf:
- The only allowed to use functions are `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy` and `va_end`.
- The behavior of `printf` must be replicated, so if `printf` crashes, this function should crash too, the return value must also be the same.
- The use of [libft](https://github.com/xDec0de/42libft) is allowed. But I decided to use new functions.
- ONLY the following conversions must be handled: %c, %s, %p, %d, %i, %u, %x, %X and %%

## What I learned
This project teaches us how to use variable arguments with `va_start`, `va_arg`, `va_copy` and `va_end`. Even though I didn't need to use `va_copy`.
