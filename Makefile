tictactoe: clean
	g++ --std=c++11 board.cpp game_state.cpp main.cpp human_player.cpp console.cpp game.cpp pyromancer.cpp swarm.cpp -o tictactoe
	./tictactoe

clean:
	@rm -rf tictactoe
