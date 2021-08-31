import re
import os
from configparser import SafeConfigParser
fname="and2.v"
input_list=[['A', 'input', '1'], ['B', 'input', '1']]

output_list=[['Y', 'output', '1']]

home='sumanto'
input_port = []
output_port = []
for input in input_list:
    input_port.append(input[0]+":"+input[2])
for output in output_list:
    output_port.append(output[0]+":"+output[2])
print("Starting with ifspec.ifs file")
ifspec = open('ifspec.ifs', 'w')

print("Gathering Al the content for ifspec file")

ifspec_comment = '''
/*
SUMMARY: This file is auto generated and it contains the interface
 specification for the code model. */\n
'''

name_table = 'NAME_TABLE:\n\
C_Function_Name: cm_' + fname.split('.')[0] + '\n\
Spice_Model_Name: ' + fname.split('.')[0] + '\n\
Description: "Model generated from ghdl code ' + fname + '" \n'

# Input and Output Port Table
in_port_table = []
out_port_table = []

for item in input_port:
    port_table = 'PORT_TABLE:\n'
    port_name = 'Port_Name:\t' + item.split(':')[0] + '\n'
    description = (
        'Description:\t"input port ' + item.split(':')[0] + '"\n'
    )
    direction = 'Direction:\tin\n'
    default_type = 'Default_Type:\td\n'
    allowed_type = 'Allowed_Types:\t[d]\n'
    vector = 'Vector:\tyes\n'
    vector_bounds = (
        'Vector_Bounds:\t[' + item.split(':')[1] +
        ' ' + item.split(":")[1] + ']\n'
    )
    null_allowed = 'Null_Allowed:\tno\n'

    # Insert detail in the list
    in_port_table.append(
        port_table + port_name + description +
        direction + default_type + allowed_type +
        vector + vector_bounds + null_allowed
    )

for item in output_port:
    port_table = 'PORT_TABLE:\n'
    port_name = 'Port_Name:\t' + item.split(':')[0] + '\n'
    description = (
        'Description:\t"output port ' + item.split(':')[0] + '"\n'
    )
    direction = 'Direction:\tout\n'
    default_type = 'Default_Type:\td\n'
    allowed_type = 'Allowed_Types:\t[d]\n'
    vector = 'Vector:\tyes\n'
    vector_bounds = (
        'Vector_Bounds:\t[' + item.split(':')[1] +
        ' ' + item.split(":")[1] + ']\n'
    )
    null_allowed = 'Null_Allowed:\tno\n'

    # Insert detail in the list
    in_port_table.append(
        port_table + port_name + description +
        direction + default_type + allowed_type +
        vector + vector_bounds + null_allowed
    )

parameter_table = '''

PARAMETER_TABLE:
Parameter_Name:     instance_id                  input_load
Description:        "instance_id"                "input load value (F)"
Data_Type:          real                         real
Default_Value:      0                            1.0e-12
Limits:             -                            -
Vector:              no                          no
Vector_Bounds:       -                           -
Null_Allowed:       yes                          yes

PARAMETER_TABLE:
Parameter_Name:     rise_delay                  fall_delay
Description:        "rise delay"                "fall delay"
Data_Type:          real                        real
Default_Value:      1.0e-9                      1.0e-9
Limits:             [1e-12 -]                   [1e-12 -]
Vector:              no                          no
Vector_Bounds:       -                           -
Null_Allowed:       yes                         yes

'''



# Writing all the content in ifspec file
ifspec.write(ifspec_comment)
ifspec.write(name_table + "\n\n")

for item in in_port_table:
    ifspec.write(item + "\n")

ifspec.write("\n")

for item in out_port_table:
    ifspec.write(item + "\n")

ifspec.write("\n")
ifspec.write(parameter_table)
ifspec.write("\n")
ifspec.close()