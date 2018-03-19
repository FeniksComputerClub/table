CXX = g++
CXXFLAGS = -std=c++11 -Wall

%.d: %.cpp
	$(CXX) $(CXXFLAGS) -MM -MT '$(patsubst %.cpp, %.o, %<)' $< -MF $@

%.o: %.cpp %.d
	$(CXX) $(CXXFLAGS) -o $@ -c $<
