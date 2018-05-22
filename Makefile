initial: ./src/note_factory.rb
	ruby ./src/note_factory.rb
play: ./src/key_piano.py
	python ./src/key_piano.py
clean: ./src/note_factory.rb
	rm *wav
