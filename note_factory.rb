require "muse"
include Muse

def rec_song # maybe a hash of parametres
	for note in Muse::NOTES
		Song.record note do
  			bar(1,b:1).notes {instance_eval note} # supposed to be one note
		end
	end
end

rec_song
