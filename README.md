# Arduino thermistor readout
A simple arduino program that converts the analog outut of an unkown thermistor type to degrees C.

The main object of this porgram is to utilize the following exponential function:
### **temp = 200 - 68 * log10(1000-v);**
