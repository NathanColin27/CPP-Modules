import os
from shutil import copyfile

print("What is the Module number?(0 - 8)")
module = input()
print("How many exos?")
total = input()

module_name = "CPP_Module_0" + str(module)
os.mkdir(module_name)
total = int(total)
for i in range(0, total):
	num_str = str(i)
	if len(num_str) == 1:
		num_str = "0" + num_str
	name = "ex" + num_str
	os.makedirs(module_name + '/' + name )
	copyfile('./Makefile', module_name + '/' + name + '/' + 'Makefile')