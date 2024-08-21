# GNC Documentation

The purpose of this document is to document the GNC processes and methods for Radical

## --------------------
## Simulation software:
## --------------------
**Ardupilot** 

**JSBSim**
Physics engine for simulation. Uses input files to run the simulation.

**PX4** 

## --------------------
## rJSBSim:
## --------------------
Radical custom JSBSim wrapper

rJSBSim/src/r_jsb_sim/run.py
- Runs JSBSim from a python script


## --------------------
## Getting started in the Simulation
## --------------------
**jsbsim.py**
- Set up structures data
	- Copy structures folder from Google Drive: Engineering/data/structures
	- Place in home directory in this format: ~/data/structures
	- Should contain files materials.json and plies.json
- Generate aircraft.pkl
    - Navigate to rAircraftSizing/scripts/aircraft/scale_aircraft_v4
    - Run "python aircraft.py"
    - This will generate ./output/aircraft/aircraft.pkl
- Generate adb.pkl
    - Navigate to rAircraftSizing/scripts/aircraft/scale_aircraft_v4
    - Run "python adb.py"
