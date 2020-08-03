import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;

public class Graph {

	private ArrayList<String> vertaxList;
	private int[][] edges;
	private int numOfEdges;
	private boolean[] isVisited;

	public Graph(int n) {
		edges = new int[n][n];
		vertaxList = new ArrayList<String>();
		numOfEdges = 0;
		isVisited = new boolean[n];
	}

	public int getFirstNeighbor(int index) {
		for ( int j=0; j<vertaxList.size(); j++ ) {
			if ( edges[index][j] > 0 ) {
				return j;
			}
		}

		return -1;
	}

	public int getNextNeighbor(int v1, int v2) {
		for ( int j=v2+1; j<vertaxList.size(); j++ ) {
			if ( edges[v1][j] > 0 ) {
				return j;
			}
		}

		return -1;
	}

	private void dfs(boolean[] isVisited, int index) {
		System.out.print(getValueByIndex(index)+"->");
		isVisited[index] = true;

		int w = getFirstNeighbor(index);

		while ( w != -1 ) {
			if ( !isVisited[w] ) {
				dfs(isVisited, w);
			}

			w = getNextNeighbor(index, w);
		}
	}

	public void dfs() {
		for ( int i=0; i<getNumOfVertax(); i++ ) {
			if ( !isVisited[i] ) {
				dfs(isVisited, i);
			}
		}
	}

	private void bfs(boolean[] isVisited, int index) {
		int u;
		int w;
		LinkedList queue = new LinkedList<>();

		System.out.print(getValueByIndex(index)+"->");

		isVisited[index] = true;

		queue.add(index);

		while ( !queue.isEmpty() ) {
			u = (Integer)queue.removeFirst();
			w = getFirstNeighbor(u);

			while ( w != -1 ) {
				if ( !isVisited[w] ) {
					System.out.print(getValueByIndex(w)+"->");

					isVisited[w] = true;

					queue.addLast(w);
				}

				w = getNextNeighbor(u, w);
			}
		}
	}

	public void bfs() {
		for ( int i=0; i<vertaxList.size(); i++ ) {
			if ( !isVisited[i] ) {
				bfs(isVisited, i);
			}
		}
	}

	public int getNumOfVertax() {
		return vertaxList.size();
	}

	public int getNumOfEdge() {
		return numOfEdges;
	}

	public String getValueByIndex(int index) {
		return vertaxList.get(index);
	}

	public int getweight(int v1, int v2) {
		return edges[v1][v2];
	}

	public void showGraph() {
		for ( int[] link : edges ) {
			System.out.println(Arrays.toString(link));
		}
	}

	public void insertVertax(String vertax) {
		vertaxList.add(vertax);
	}

	public void insertEdge(int v1, int v2, int weight) {
		edges[v1][v2] = weight;
		edges[v2][v1] = weight;
		numOfEdges++;
	}

	public static void main(String[] args) {
		int n = 5;
		String vertaxs[] = {"A", "B", "C", "D", "E"};
		Graph graph = new Graph(n);
		for ( String vertax : vertaxs ) {
			graph.insertVertax(vertax);
		}

		graph.insertEdge(0, 1, 1);
		graph.insertEdge(0, 2, 1);
		graph.insertEdge(1, 2, 1);
		graph.insertEdge(1, 3, 1);
		graph.insertEdge(1, 4, 1);

		graph.showGraph();

// 		graph.dfs();

		System.out.println();

		graph.bfs();
	}
}
