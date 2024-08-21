#!/bin/sh

#Description: Commands for checking out all necessary simulation modules for Radical simulation


#----------------
#ArduPilot
#----------------
git clone https://github.com/ArduPilot/ardupilot.git

#----------------
#JSBSim
#----------------
git clone https://github.com/JSBSim-Team/jsbsim.git

#----------------
#Aswing
#----------------
git clone git@bitbucket.org:radicalaero/aswing.git

#----------------
#Radical
#----------------
git clone git@bitbucket.org:radicalaero/raircraftsizing.git rAircraftSizing
git clone git@bitbucket.org:radicalaero/rairfoiltools.git rAirFoilTools
git clone git@bitbucket.org:radicalaero/raswing.git rAswing
#git clone git@bitbucket.org:radicalaero/rcatia.git rCatia #Don't need Catia at the moment
git clone git@bitbucket.org:radicalaero/rcommon.git rCommon
git clone git@bitbucket.org:radicalaero/rflightgear.git rFlightGear
git clone git@bitbucket.org:radicalaero/rgeometryengine.git rGeometryEngine
git clone git@bitbucket.org:radicalaero/rjsbsim.git rJSBSim
git clone git@bitbucket.org:radicalaero/rloganalysis.git rLogAnalysis
git clone git@bitbucket.org:radicalaero/rpackagetemplate.git rPackageTemplate
