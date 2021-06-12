import { Component } from "react";
import CardList from "./CardList";
import { Robots } from "./Robots";
import SearchBox from "./SearchBox";
import "./App.css";

class App extends Component {
    constructor() {
        super();
        this.state = {
            Robots: Robots,
            searchfield: "",
        };
    }

    searchandchange = (event) => {
        this.setState({ searchfield: event.target.value });
    };

    render() {
        const filterfriend = this.state.Robots.filter((Robot) => {
            return Robot.name
                .toLowerCase()
                .includes(this.state.searchfield.toLowerCase());
        });
        return (
            <div className="tc">
                <h1 className="f1">Search Your ClassMates</h1>
                <SearchBox seachchange={this.searchandchange} />
                <CardList Robots={filterfriend} />
            </div>
        );
    }
}

export default App;
