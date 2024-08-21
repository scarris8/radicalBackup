# --------------------------------
# Goals
# --------------------------------
- Figure out what the most important task is for upcoming flight test
    - System model?
    - Control gains? --> where are those located?
- Use simulation to develop robust control
    - Gain scheduling - how?
        - Mission-based?
        - State-based?
        - Combination? - Use mission states as switches and have state-based gain scheduling for each switch
- Use simulation to test system and subsystems in mission sense
    - Mission/sequencer file? Auto-generated?
- Use simulation to test stability of system
    - Develop method of testing stability - Nichols?
    - Get poles of OL and/or CL system?
- Characterize performance of actuators - in-house testing?
- Dynamic model of system
- HITL testing

# --------------------------------
# To do
# --------------------------------
- Get virtual machine up and running - needs 15G of space
- Make instructions for configuring sim
- Fix MAVProxy
- Read up on JSBSim, Ardupilot and Aswing

# --------------------------------
# Q's
# --------------------------------
- SIM_JSBSim.cpp - file on wiki appears to match the existing one in arduplane - should there be some modifications?
- SIM_JSBSim.cpp - file mods for adapted commands - need access to file in Cyriel's home directory?
- sim_vehicle.py command - params.param file doesn't exist?
- running sim_vehicle.py with the argument "-A --disable-fgview" causes the error "Failed to connect to tcp:127.0.0.1:5760 : [Errno 111] Connection refused" --> need to figure out why that is. The "-A" flag passes an argument to the SITL instance. Maybe I need the add-params-file argument as well?
- Do I need the px4 sw in the simulation? Or is that contained in Ardupilot?
- Running jsbsim.py --> can't find aircraft.pkl, do I need to generate that?

# -----------------------------
# Notes
# -----------------------------
- python packages/modules are contained in src/ folder
- Board - ARKV6X
- Aswing Installation:
    - I had to make some changes to ARPACK to get it all to work with the fortran compiler
        - ARmake.inc:
        `FFLAGS = -O -fallow-argument-mismatch -fallow-invalid-boz -m64`
        `FCFLAGS = -fallow-argument-mismatch -fallow-invalid-boz -m64`
    - We should probably have an ARPACK version saved so we can easily check it out in the future

- JSBSim Installation:
    - download .deb files and run "sudo dpkg -i <filename.deb>" on each one
    - Make sure that "which JSBSim" returns the location of the JSBSim executable

- FlightGear Installation:
    - sudo apt install flightgear
    - installs "fgfs" executable


