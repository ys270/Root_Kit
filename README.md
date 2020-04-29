# Root_kit
Tests were ran on Duke virtual machine with Ubuntu 16.

Please see [project5.pdf](https://github.com/ys270/Root_kit/blob/master/project-5.pdf) for detailed requirement.

#### How To Run
```
# build
make # build sneaky_mod
make sneaky_process # build sneaky_process

# Run
sudo ./sneaky_process
```
The ```sneaky_process``` quits with q.

You should have two terminals open at the same time. For one is running ```sneaky_process```, it accounts for insertion of ```sneaky_mod```. For another is a normal terminal, you should be able to run the command in requirement.pdf with the sneaky results.

To simply insert the mod to kernel without running ```sneaky_process```, you should use sudo insmod sneaky_mod.ko pid="1111" where 1111 is the pid you want to hide. To remove the mod, use sudo rmmod sneaky_mod.
