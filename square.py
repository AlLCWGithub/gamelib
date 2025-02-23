import pygame
import sys

# Initialize Pygame
pygame.init()

# Set up the screen
screen = pygame.display.set_mode((800, 600))  # Width 800, Height 600
pygame.display.set_caption('White Square')

# Main game loop
while True:
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Fill the screen with blue
    screen.fill((0, 0, 255))  # RGB for blue

    # Draw a white square in the center
    pygame.draw.rect(screen, (255, 255, 255), (300, 200, 200, 200))  # (x, y, width, height)

    # Update the screen
    pygame.display.flip()
