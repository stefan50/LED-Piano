import pygame, sys, pygame.mixer

pygame.init()
pygame.mixer.init()

size = width, height = 100, 100
screen = pygame.display.set_mode(size)

while 1:
    for ev in pygame.event.get():
        if ev.type == pygame.KEYDOWN:
            if ev.key == pygame.K_z:
                pygame.mixer.music.load("c.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_s:
                pygame.mixer.music.load("cis.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_x:
                pygame.mixer.music.load("d.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_d:
                pygame.mixer.music.load("dis.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_c:
                pygame.mixer.music.load("e.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_v:
                pygame.mixer.music.load("f.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_g:
                pygame.mixer.music.load("fis.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_b:
                pygame.mixer.music.load("g.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_h:
                pygame.mixer.music.load("gis.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_n:
                pygame.mixer.music.load("a.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_j:
                pygame.mixer.music.load("ais.wav")
                pygame.mixer.music.play(0)
            elif ev.key == pygame.K_m:
                pygame.mixer.music.load("b.wav")
                pygame.mixer.music.play(0)
            else:
                print "I don't know..."
        if ev.type == pygame.QUIT:
            sys.exit()
