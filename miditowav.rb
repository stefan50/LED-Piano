require "muse"
include Muse

# Hash of parametres:
#	int octave
#	float beat
#	string name_of_song
#	string note (?)

def rec_song name_of_song # maybe a hash of parametres
	Song.record name_of_song do
  		bar(1,b:5).notes   {b4} # supposed to be one note
	end
end

name_of_song = gets.chomp!
t1 = Thread.new{rec_song name_of_song}
t1.join
p = spawn("vlc #{name_of_song}.wav &")
sleep 5 # sleep for the duration of the beat
p = spawn("rm #{name_of_song}.wav &")
puts "done"

