require 'serialport' #gem for accessing serial port

while true
	p2 = spawn("ruby prog2.rb")
	Process.wait p2
	puts "spawn out"
end 
