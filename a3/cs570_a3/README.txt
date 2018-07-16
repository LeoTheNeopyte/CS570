Prithipal Khalsa, cssc1182
Leonardo Gomez, cssc1194
Janae Waldon, cssc1183

1) How does it work:
  - Upon running the program it will read the arguments	provided by the	user as	described below.
    if none are provided the program will set default values.
  - The	first parameter	will be	the time (in seconds) the program will run before it exits.If no value is provided, the	default	value of 25 seconds shall be used for this countdown timer.
  - Next, the program will create two child threads (from the main, initial thread), then busywaits
    until all child threads have completed and then perform a clean exit.
  - One	of these child threads will monitor a countdown	timer, upon reaching the specified
    number of seconds it will notify the other child thread (i.e. it's
    sibling thread) to terminate and then terminate itself.
  - The	other child process will implement a "wall clock" which	prints the hour, minute, and
    second of the time of day to the user terminal once	every second. When the hour, minute,and	second matches the user-provided
    countdown time, an Alarm would be printed in addition to the time let the user know	the
    program is terminating.
  - Once all child threads have	terminated, the	parent thread (and the process)	will print a
    friendly message, then perform a clean exit.

2) File manifest:
  a3.c
  a3.h
  main.c
  README
  makefile

3) Compile instructions:
  - Typing "make" all the programs will compile into an executable name "tevent."

4) Operating instructions:
- Two way to execute the program:
  First, the user can execute the program by running "./tevent n" in which "n" represents the number of seconds.
  Second, the user can type "make run time=n" in which "n" represents the number of seconds.
- Typing "make clean" it will remove all object files and executables.

5) List/description of all known deficiencies or bugs:
  - if the user enters a parameter that is not an integer, the program will print a goodbye message and then the time.

6) Lessons Learned:
  To design and implement a programmable event and timer control program.
