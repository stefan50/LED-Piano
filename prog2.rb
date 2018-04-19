while true
	string = gets.chomp!
	puts string
	if string == "end"
		break
	else if string == "exit"
		Process.exit
	end
end
