# Ascon
ASCON implementation
# makefile 
 the most used commands in makefile are:
  to generate the verilog file:
  bsc -u  -elab  +RTS -K4000M -RTS -check-assert -opt-undetermined-vals -remove-false-rules -remove-empty-rules -remove-starved-rules -remove-dollar -unspecified-to 0 -show-schedule -opt-undetermined-vals -keep-fires -show-module-use -verilog -g mkAscon_engine filename.bsv
