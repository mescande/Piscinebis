ifconfig | grep ether | sed 's/ \+/ /' | cut -d ' ' -f 3
