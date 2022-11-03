# simpleCLI
A simple framework for building a Command Line Interface for use in Arduino, embedded,  or 8-bit limited resource projects.

Used with CONduinIO to build an improved serial console for Arduino.

## Requirement
- TBD(): A function to read input from (read_until)
- TBD(): A function to write output to (puts)

## Inspirations
- C main function signature
- DOS simple launcher for single task environment
- FreeRTOS+CLI

### Features/TODO
- Has a framework to register callback commands ties to command line argument entries.
- C style main() argument structure
- [ ] Arg parsing with quoted arguments
- [ ] Arg parsing with escape characters
- [ ] Automatically generated help
- [ ] Add Doxygen comments to header
- [x] Split out CLI callback framework
- [ ] Support for nested CLI command lists
- [ ] Environment variable substitution
