## COVERAGE MEASUREMENT IDEA
- initial: add all bitmap datas (if count=0)
- not initial
  + if trace_bits value and virgin_bits value in same index is same -> 0
  + if trace_bits value > virgin_bits value in same index -> increase coverage
  + if trace_bits value < virgin_bits value in same index -> decrease COVERAGE
- write current time and coverage value in file
  + it will be used to draw coverage/time graph


## OUTPUT FILE 
```
13303989718199:1980
13303989718871:1980
13303989720919:1980
13303989721684:1980
13303989722372:1980
13303989723200:1980
13303989723981:1980
13303989724637:1980
13303989725481:1980
13303989726247:1980
13303989726965:1980
13303989727778:1980
```
