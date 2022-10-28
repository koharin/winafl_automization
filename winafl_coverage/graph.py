import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np
import sys

coverage_file = sys.argv[1]
time = list()
coverage = list()

# add time data to time list, coverage data to coverage list
file = open(coverage_file, 'r')
result=list()

# get time, coverage in each line
while True:
	line = file.readline()
	if not line: break 
	t, c = line.strip().split(':')
	temp=list()
	temp.append(int(t))
	temp.append(int(c))
	if not result:
		result = [temp]
	else:
		result.append(temp)

# sort in time in ascending order
result.sort(key=lambda x: x[0])

# accumulation
for i in range(1, len(result)):
	result[i][1] += result[i-1][1]

for i in range(len(result)):
	time.append(result[i][0])
	coverage.append(result[i][1])

print(time)
print(coverage)


# create a figure containing a single axes
fig, ax = plt.subplots()

# plot data on the axes
ax.plot(time ,coverage)

# labeling
plt.ylabel('coverage')
plt.xlabel('testcase modified time (ms)')

# show coverage graph
plt.show()

file.close()
