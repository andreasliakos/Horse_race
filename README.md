# Horse_race
We are looking for a program that simulates horse racing. In this program there will be a
number of horses h (at most 10) and a number of laps r (at most 20) required to complete the
race. For example if h=4 and r=10 then an initial situation would be as follows




|1.........|

|2.........|

|3.........|

|4.........|

Press any key to advance one step

The user will be prompted to press any key and each horse will move one step forward or
remain stationary in place. Therefore, next state, in a code execution, may be the following:

|.1........|

|2.........|

|3.........|

|.4........|

Press any key to advance one step

The race is finished when all the horses have finished, at which point their finishing order will
be displayed. If a horse fails to finish after twice the number of rounds then it will be deemed to
have not finished (DNF) and will be ranked last.

Question A

Construct a class named horse that defines the member fields id (horse serial number),
name (horse name), startup_speed (horse starting speed, integer value between 50 and 100),
power (horse power, integer value between 50 and 100), and stamina (horse stamina, integer
value between 50 and 100). Define the member function move_forward() to return true or false
depending on whether at the next step of a race the horse moves forward or remains
stationary. The function will take 2 parameters, the number of step from the start of the race
and a real random number r from 0 to 100 and return true only in the following cases:

• If it is the first round of the race and startup_speed is higher than r.

• If it is rounds 2 to 8 and the power is higher than r.

• If it is the next rounds of the race and the average power and stamina is higher than r.

Build test with catch22
that checks the correctness of the move_forward function.

Question B

Write a program that takes as command line parameters the number of horses and the
number of laps of the race (with default values h=4, r=10). Randomly initialize the names of
horses from the following list: Blitz, Bolt, Goliath, Hercules, Rogue, Danger, Raider, Storm, Nitro,
Hulk.

Also, randomly assign values to the startup_speed, stamina and power fields. Then be able
to display on the screen the progress of a race according to the example given at the
beginning. The final ranking list should show not only the number but also the names of the
horses.

Question C

Add the ability to place bets. A user will start with an amount (e.g. 100 euro) and then and
until he either runs out of money or decides to quit he will be able to bet an amount on one of
the horses in an 8 horse 10-step race. If the horse on which the money is bet on finishes in one
of the top 3 places then the money bet will be returned, if it finishes first then the money bet
will be doubled, otherwise the money will be lost. Add the ability to not require the user to
press a button to advance to the next round of each race, but to display all steps of the race
and the standings direct
