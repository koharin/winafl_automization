import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np
import sys

coverage_file = sys.argv[1]

# add time data to time list, coverage data to coverage list
time = []
coverage = []
file = open(coverage_file, 'r')

while True:
	line = file.readline()
	if not line: break
	line = line.strip()
	t, c = line.split(':')
	time.append(int(t))
	coverage.append(int(c))

print(time)
print(coverage)

# create a figure containing a single axes
fig, ax = plt.subplots()

# plot data on the axes
ax.plot(time ,coverage)

# labeling
plt.ylabel('coverage')
plt.xlabel('testcase modified time')

# show coverage graph
plt.show()

file.close()
